// sub_08000908 at 0x08000908 (thumb)

void sub_08000908(void)

{
  undefined2 *unaff_r5;
  int unaff_r7;
  
  *(undefined4 *)(unaff_r5 + 2) = *(undefined4 *)(unaff_r7 + 0x1c);
  unaff_r5[1] = *(undefined2 *)(unaff_r7 + 10);
  *(undefined4 *)(unaff_r5 + 6) = *(undefined4 *)(unaff_r7 + 0x44);
  *(undefined4 *)(unaff_r5 + 4) = *(undefined4 *)(unaff_r7 + 0x20);
  *unaff_r5 = 0x60;
  return;
}

