#!/bin/bash
./clock $(date | cut -d ' ' -f 4 | tr ':' ' ')
