// sub_080053AC at 0x080053AC (thumb)

undefined8 sub_080053AC(int *param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar2 = sub_08128A24(param_2,0xf);
  iVar3 = sub_08128A24(param_3,10);
  bVar1 = ((byte *)param_1[3])[(uint)*(byte *)param_1[3] * iVar3 + iVar2 + 4];
  iVar2 = sub_08128A9C(param_2,0xf);
  iVar3 = sub_08128A9C(param_3,10);
  return CONCAT44(in_lr,(uint)*(byte *)((uint)*(ushort *)
                                               ((iVar3 * 0xf + (uint)bVar1 * 0x96 + iVar2) * 2 +
                                               param_1[2]) * 2 + *param_1));
}

