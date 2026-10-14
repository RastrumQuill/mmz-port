// sub_0800529C at 0x0800529C (thumb)

undefined8 sub_0800529C(int *param_1,undefined4 *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 in_lr;
  
  uVar2 = *param_2;
  iVar3 = sub_080C8AD0(uVar2,0xf0);
  uVar5 = param_2[1];
  iVar4 = sub_080C8AD0(uVar5,0xa0);
  bVar1 = ((byte *)param_1[3])[(uint)*(byte *)param_1[3] * iVar4 + iVar3 + 4];
  iVar3 = sub_080C8B68(uVar2,0xf0);
  iVar4 = sub_080C8B68(uVar5,0xa0);
  return CONCAT44(in_lr,(uint)*(byte *)((uint)*(ushort *)
                                               (((iVar4 >> 4) * 0xf +
                                                (uint)bVar1 * 0x96 + (iVar3 >> 4)) * 2 + param_1[2])
                                       + *param_1));
}

