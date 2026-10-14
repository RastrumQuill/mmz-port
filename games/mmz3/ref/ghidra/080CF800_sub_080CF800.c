// sub_080CF800 at 0x080CF800 (thumb)

undefined4 sub_080CF800(int param_1)

{
  char *pcVar1;
  undefined4 in_lr;
  
  pcVar1 = (char *)(param_1 + 0xbd);
  if (*pcVar1 == '\0') {
    sub_0800393C(&DAT_085d81f4,(DAT_0202faf6 - 0x230) * 0x20 + 0x10000);
    sub_08003E14(&DAT_085d8200,(DAT_0202f8f6 - 5) * 0x20 + 0x200);
  }
  if (*pcVar1 == '\x01') {
    sub_0800393C(&DAT_085d83ac,(DAT_0202fb22 - 0x230) * 0x20 + 0x10000);
    sub_08003E14(&DAT_085d83b8,(DAT_0202f922 - 5) * 0x20 + 0x200);
  }
  if (*pcVar1 == '\x02') {
    sub_0800393C(&DAT_085d83c0,(DAT_0202fb24 - 0x230) * 0x20 + 0x10000);
    sub_08003E14(&DAT_085d83cc,(DAT_0202f924 - 5) * 0x20 + 0x200);
  }
  sub_0801749C(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef | 3;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
  *(undefined **)(param_1 + 0x30) = &DAT_0836cef0;
  *(undefined2 *)(param_1 + 0x26) = 0x2001;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_0800736C(param_1 + 0x74,&DAT_0836ceb4,param_1 + 0x54,0);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0x65000;
  *(int *)(param_1 + 0xb8) = 0x26000;
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0xb4);
  *(uint *)(param_1 + 0x58) = *(int *)(param_1 + 0xb8) + (uint)*(byte *)(param_1 + 0x11) * 0xa000;
  *(undefined2 *)(param_1 + 0xbe) = 0xffff;
  sub_080CF6F4(param_1,1,0);
  DAT_0202e494 = 0;
  DAT_0202e498 = 0;
  DAT_0202e49c = 0x3c0000;
  DAT_0202e4a0 = 0x280000;
  *(undefined *)(param_1 + 0xc0) = 0;
  *(undefined *)(param_1 + 0xc1) = 5;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_080CF76C(param_1);
  return in_lr;
}

