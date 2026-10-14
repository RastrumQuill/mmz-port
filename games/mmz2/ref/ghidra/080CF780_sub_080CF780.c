// sub_080CF780 at 0x080CF780 (thumb)

undefined4 sub_080CF780(int param_1)

{
  undefined uVar1;
  undefined4 in_lr;
  
  sub_080126A0();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_080127E4(param_1,0x8500);
  *(undefined2 *)(param_1 + 0x50) = 0x100;
  *(undefined2 *)(param_1 + 0x52) = 0x100;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(undefined *)(param_1 + 0x25) = 0x17;
  if (*(char *)(param_1 + 0x11) == '\0') {
    uVar1 = 0x40;
  }
  else {
    uVar1 = 0xc0;
  }
  *(undefined *)(param_1 + 0xba) = uVar1;
  *(undefined4 *)(param_1 + 0x5c) = 0x1200;
  *(undefined4 *)(param_1 + 0x60) = 0x1200;
  *(undefined *)(param_1 + 0xb8) = 0x80;
  *(undefined *)(param_1 + 0x13) = 0;
  *(undefined *)(param_1 + 0x12) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0834863c + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_080CF5E0(param_1);
  return in_lr;
}

