// sub_08095F04 at 0x08095F04 (thumb)

undefined4 sub_08095F04(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08002B10(0x35);
    uVar4 = 0;
    do {
      uVar3 = 0;
      uVar2 = uVar4 + 1;
      while (((int)uVar3 < 2 &&
             (iVar1 = sub_080C2C40(param_1,param_1 + 0x54,uVar4 & 0xff,uVar3 & 0xff), iVar1 != 0)))
      {
        *(char *)(param_1 + 0xb4) = *(char *)(param_1 + 0xb4) + '\x01';
        uVar3 = uVar3 + 1;
      }
      uVar4 = uVar2;
    } while ((int)uVar2 < 2);
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfa;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  if (*(char *)(param_1 + 0xb4) == '\0') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  return in_lr;
}

