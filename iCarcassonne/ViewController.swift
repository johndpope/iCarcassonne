//
//  ViewController.swift
//  iCarcassonne
//
//  Created by Michael Cohen on 2/3/17.
//  Copyright © 2017 Michael Cohen. All rights reserved.
//

import UIKit

class ViewController: UIViewController {

    override func viewDidLoad() {
        super.viewDidLoad()
        
        let grid = TileGrid(width: 4, height: 6)
        //grid.printGrid()
        
        //test producing random tiles
        for _ in 1...100 {
            let tile = Deck.sharedInstance.makeRandomTile()
            print(tile)
        }
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }


}

