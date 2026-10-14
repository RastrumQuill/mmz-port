// sub_080D4F40 at 0x080D4F40 (thumb)

undefined4 sub_080D4F40(int param_1)

{
  ushort uVar1;
  char cVar2;
  undefined4 in_lr;
  
  uVar1 = *(ushort *)(&DAT_0834a148 + (uint)*(byte *)(param_1 + 0x10) * 2);
  if ((((int)(uint)*(byte *)(DAT_0202e130 + 0x228 + (uint)(uVar1 >> 3)) >> (uVar1 & 7) & 1U) == 0)
     && (cVar2 = sub_080D6B74(uVar1 & 0xff), cVar2 == '\0')) {
    sub_08012580(param_1);
    sub_080127E4(param_1,0x105);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 7;
    sub_08006DE4(param_1 + 0x74,&DAT_0834a118,param_1 + 0x54,1);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0834a09c)[*(byte *)(param_1 + 9)] + 4);
    sub_080D5020(param_1);
    return in_lr;
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  *(undefined4 *)(param_1 + 0xc) = 3;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0834a09c)[*(byte *)(param_1 + 9)] + 0xc);
  return in_lr;
}

