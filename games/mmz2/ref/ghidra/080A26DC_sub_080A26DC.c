// sub_080A26DC at 0x080A26DC (thumb)

undefined4 sub_080A26DC(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    bVar1 = *(byte *)(param_1 + 10) >> 4;
    uVar4 = bVar1 & 1;
    sub_08012580(param_1);
    if ((bVar1 & 1) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(char *)(param_1 + 0x4c) = (char)uVar4;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar4 << 4);
    sub_080127E4(param_1,0x3702);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  uVar4 = sub_08015188(&DAT_0202ed18,param_1 + 0x54);
  if (uVar4 < 0x4001) {
    *(int *)(param_1 + 0x54) =
         *(int *)(param_1 + 0x54) + (int)*(char *)(param_1 + 0xc0) * *(int *)(param_1 + 0x5c);
    iVar3 = *(int *)(param_1 + 0x5c) + 0x18;
    *(int *)(param_1 + 0x5c) = iVar3;
    if (0x600 < iVar3) {
      *(undefined4 *)(param_1 + 0x5c) = 0x600;
    }
    if (DAT_0202e130 != 0) {
      iVar3 = sub_0801F004(DAT_0202e130,0);
      iVar2 = *(int *)(param_1 + 0x58);
      if (iVar3 < iVar2) {
        iVar2 = iVar2 + -0x60;
      }
      else {
        if (iVar3 <= iVar2) {
          return in_lr;
        }
        iVar2 = iVar2 + 0x60;
      }
      *(int *)(param_1 + 0x58) = iVar2;
    }
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  return in_lr;
}

