// sub_080A5B6C at 0x080A5B6C (thumb)

undefined4 sub_080A5B6C(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  sub_080128D4();
  if ((1 < *(byte *)(iVar4 + 0xd)) &&
     (bVar1 = *(byte *)(param_1 + 0x13), *(byte *)(param_1 + 0x13) = bVar1 + 1, (bVar1 & 0xf) == 0))
  {
    sub_080B7330(param_1,0,0);
  }
  if (*(byte *)(iVar4 + 0x13) < 0x14) {
    *(uint *)(param_1 + 0x54) =
         *(int *)(iVar4 + 0x54) +
         (uint)*(byte *)(iVar4 + 0x13) *
         (int)(short)(&DAT_080ef450)
                     [((uint)*(byte *)(iVar4 + 0x12) + (uint)*(byte *)(param_1 + 0x11) & 0xff) +
                      0x40 & 0xff];
    iVar3 = (short)(&DAT_080ef450)
                   [(uint)*(byte *)(iVar4 + 0x12) + (uint)*(byte *)(param_1 + 0x11) & 0xff] * 0x14;
  }
  else {
    *(uint *)(param_1 + 0x54) =
         *(int *)(iVar4 + 0x54) +
         (uint)*(byte *)(iVar4 + 0x13) *
         (int)(short)(&DAT_080ef450)
                     [((uint)*(byte *)(iVar4 + 0x12) + (uint)*(byte *)(param_1 + 0x11) & 0xff) +
                      0x40 & 0xff];
    iVar3 = (uint)*(byte *)(iVar4 + 0x13) *
            (int)(short)(&DAT_080ef450)
                        [(uint)*(byte *)(iVar4 + 0x12) + (uint)*(byte *)(param_1 + 0x11) & 0xff];
  }
  *(int *)(param_1 + 0x58) = *(int *)(iVar4 + 0x58) + iVar3;
  if (1 < *(byte *)(iVar4 + 0xc)) {
    if (*(char *)(iVar4 + 0x11) != '\0') {
      sub_080B7330(param_1,2,0);
    }
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 8);
  }
  sVar2 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  if (sVar2 != 0) {
    sub_080AC60C(3,param_1 + 0x54);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

