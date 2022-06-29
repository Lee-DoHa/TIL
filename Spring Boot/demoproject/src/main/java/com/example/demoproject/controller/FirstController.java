package com.example.demoproject.controller;

import org.springframework.stereotype.Controller;
import org.springframework.ui.Model;
import org.springframework.web.bind.annotation.GetMapping;

@Controller
public class FirstController {

    @GetMapping("/hi")
    public String hi(Model model){
        model.addAttribute("username", "도하");
        return "greetings";
    }
}
