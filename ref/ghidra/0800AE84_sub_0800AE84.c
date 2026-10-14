// sub_0800AE84 at 0x0800AE84 (thumb)

undefined4 sub_0800AE84(void)

{
  undefined4 in_lr;
  
  if (((DAT_0202268c & 1) == 0) && ((DAT_02022ad5 & 0x80) != 0)) {
    sub_080067C4(0x1ad,0x2a,&DAT_08296520);
    DAT_0202268c = DAT_0202268c | 1;
  }
  if (((DAT_0202268c & 2) == 0) && ((DAT_02022ad6 & 1) != 0)) {
    sub_080067C4(0x1b4,0x2a,&DAT_0829654c);
    DAT_0202268c = DAT_0202268c | 2;
  }
  if (((DAT_0202268c & 4) == 0) && ((DAT_02022ad6 & 2) != 0)) {
    sub_080067C4(0x1bb,0x29,&DAT_08296520);
    DAT_0202268c = DAT_0202268c | 4;
  }
  if (((DAT_0202268c & 8) == 0) && ((DAT_02022ad6 & 4) != 0)) {
    if ((DAT_02022ad6 & 8) == 0) {
      sub_080067C4(0x1c6,0x27,&DAT_08296520);
    }
    else {
      sub_080067C4(0x1c6,0x27,&DAT_08296578);
    }
    DAT_0202268c = DAT_0202268c | 8;
  }
  if (((DAT_0202268c & 0x10) == 0) && ((DAT_02022ad6 & 8) != 0)) {
    sub_080067C4(0x1ca,0x27,&DAT_08296520);
    DAT_0202268c = DAT_0202268c | 0x10;
  }
  return in_lr;
}

