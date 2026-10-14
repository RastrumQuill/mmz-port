// sub_08005308 at 0x08005308 (thumb)

undefined8 sub_08005308(int *param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar2 = sub_080C8C38(param_2,0xf);
  iVar3 = sub_080C8C38(param_3,10);
  bVar1 = ((byte *)param_1[3])[(uint)*(byte *)param_1[3] * iVar3 + iVar2 + 4];
  iVar2 = sub_080C8CB0(param_2,0xf);
  iVar3 = sub_080C8CB0(param_3,10);
  return CONCAT44(in_lr,(uint)*(byte *)((uint)*(ushort *)
                                               ((iVar3 * 0xf + (uint)bVar1 * 0x96 + iVar2) * 2 +
                                               param_1[2]) + *param_1));
}

