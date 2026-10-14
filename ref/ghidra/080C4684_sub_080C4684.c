// sub_080C4684 at 0x080C4684 (thumb)

undefined4 sub_080C4684(int param_1)

{
  byte bVar1;
  undefined uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_lr;
  
  sub_080C4628(param_1,3);
  bVar1 = *(byte *)(param_1 + 5);
  uVar3 = sub_0801B374(*(undefined4 *)(param_1 + 0x10));
  iVar4 = *(int *)(param_1 + 0x14) + (bVar1 + 5) * 0x40 + 0x26;
  uVar2 = sub_080C4604(*(undefined *)((int)&DAT_082cc222 + bVar1 + 1),uVar3);
  sub_080C46D0(iVar4,uVar2,2);
  sub_080C4708(iVar4 + 2,2);
  return in_lr;
}

