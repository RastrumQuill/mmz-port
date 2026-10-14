// sub_08088620 at 0x08088620 (thumb)

undefined4 sub_08088620(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 10) >> 5;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  uVar4 = *(undefined4 *)(param_1 + 0x54);
  if ((bVar1 & 1) == 0) {
    iVar3 = *(int *)(param_1 + 0x58) + 0x800;
    sVar2 = sub_08007C7C(uVar4,iVar3);
    if (sVar2 == 0) {
      *(undefined *)(param_1 + 0xe) = 2;
      *(undefined *)(param_1 + 0xf) = 0;
    }
    else {
      uVar4 = sub_08008534(uVar4,iVar3);
      *(undefined4 *)(param_1 + 0x58) = uVar4;
      *(undefined *)(param_1 + 0xe) = 1;
      *(byte *)(param_1 + 0xf) = bVar1 & 1;
    }
  }
  else {
    *(undefined *)(param_1 + 0xe) = 2;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  sub_08128884(param_1,*(undefined4 *)(&DAT_0885ba88 + (uint)*(byte *)(param_1 + 0xe) * 4));
  return in_lr;
}

