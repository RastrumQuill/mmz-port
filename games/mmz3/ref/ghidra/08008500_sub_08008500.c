// sub_08008500 at 0x08008500 (thumb)

undefined4 sub_08008500(void)

{
  undefined4 in_lr;
  
  sub_080034AC(5,&DAT_02002430,0x50);
  do {
    do {
      sub_08003254();
    } while (DAT_02002160 == '\x02');
  } while (DAT_0200217c == 0);
  return in_lr;
}

