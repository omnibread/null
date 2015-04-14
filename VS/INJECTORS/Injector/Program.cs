using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.IO;
using System.Text;

namespace Injector
{
    class Program
    {
        static void Main(string[] args)
        {
            if(args.Length != 2)
            {
                Console.WriteLine("Missing arguments!");
                return;
            }

            Console.WriteLine("Searching for '{0}'", args[0]);

            Process[] p = Process.GetProcessesByName(args[0].Substring(0, args[0].LastIndexOf(".exe")));
            if(p.Length == 0)
            {
                Console.WriteLine("Process not found!");
                return;
            }

            Console.WriteLine("Process '{0}' found! Id: {1}", args[0], p[0].Id);

            if(!File.Exists(args[1]))
            {
                Console.WriteLine("Dll not found!");
                return;
            }

            Console.WriteLine("Injecting '{0}' into '{1} [{2}]'", args[1], args[0], p[0].Id);

            string dll = Path.GetFullPath(args[1]);
            if (!Injector.InjectDll(p[0], dll))
                Console.WriteLine("ERROR! Injection failed!");
            else
                Console.WriteLine("Dll successfully injected!");
        }
    }
}
