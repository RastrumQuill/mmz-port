// sub_080BBA68 at 0x080BBA68 (thumb)

undefined8 sub_080BBA68(int param_1)

{
  undefined uVar1;
  undefined uVar2;
  undefined uVar3;
  short sVar4;
  undefined4 uVar5;
  undefined4 in_lr;
  
  uVar5 = sub_080BBA34();
  uVar1 = *(undefined *)(param_1 + 0x12);
  uVar3 = *(undefined *)(param_1 + 0x11);
  uVar2 = sub_080C8A98(param_1,*(undefined4 *)(&DAT_082b8eec + (uint)*(byte *)(param_1 + 0x10) * 4))
  ;
  uVar3 = sub_080B4DA4(uVar5,uVar3,uVar2);
  *(undefined *)(param_1 + 0x12) = uVar3;
  sVar4 = sub_080C8AA8(param_1,uVar5,uVar3,uVar1);
  return CONCAT44(in_lr,(int)sVar4);
}

