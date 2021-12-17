open StarterLib;

let () =
  Math.safe_div(2.0, 0.0)
  |> Option.fold(
       ~some=result => Printf.sprintf("Result is %.1f", result),
       ~none="Cannot divide by 0",
     )
  |> print_endline;
