// sub_080C4628 at 0x080C4628 (thumb)

undefined4 sub_080C4628(int param_1,undefined param_2)

{
  undefined uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  int iVar5;
  
  uVar2 = sub_0801B374(*(undefined4 *)(param_1 + 0x10));
  iVar3 = *(int *)(param_1 + 0x14) + 0x2a6;
  iVar5 = 4;
  do {
    iVar4 = iVar5 + -1;
    uVar1 = sub_080C4604(*(undefined *)((int)&DAT_082cc222 + iVar5 + 1),uVar2);
    sub_080C46D0(iVar3 + -0x40,uVar1,param_2);
    sub_080C4708(iVar3 + -0x3e,param_2);
    iVar3 = iVar3 + -0x40;
    iVar5 = iVar4;
  } while (iVar4 != 0);
  return in_lr;
}

