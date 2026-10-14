// sub_08000934 at 0x08000934 (thumb)

void sub_08000934(void)

{
  undefined2 *unaff_r5;
  int unaff_r7;
  
  unaff_r5[1] = *(undefined2 *)(unaff_r7 + 10);
  unaff_r5[2] = *(undefined2 *)(unaff_r7 + 0x1c);
  *unaff_r5 = 0x62;
  return;
}

