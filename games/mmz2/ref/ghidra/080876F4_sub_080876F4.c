// sub_080876F4 at 0x080876F4 (thumb)

undefined4 sub_080876F4(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  sub_080128D4();
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar2 = *(int *)(iVar4 + 0x54);
    iVar3 = -0xa00;
  }
  else {
    iVar2 = *(int *)(iVar4 + 0x54);
    iVar3 = 0xa00;
  }
  *(int *)(param_1 + 0x54) = iVar2 + iVar3;
  *(int *)(param_1 + 0x58) = *(int *)(iVar4 + 0x58) + 0x2000;
  sVar1 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54));
  if (sVar1 != 0) {
    sub_080032EC(0x3f);
    sub_080874C4(param_1,1,0);
    sub_080874C4(param_1,1,0x10);
    sub_080874C4(param_1,1,0x20);
    sub_080874C4(param_1,1,0x30);
    sub_080874C4(param_1,1,0x40);
    sub_080874C4(param_1,1,0x50);
    sub_080874C4(param_1,1,0x60);
    sub_080874C4(param_1,1,0x70);
    sub_080874C4(param_1,1,0x80);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_08087558(param_1);
  }
  return in_lr;
}

