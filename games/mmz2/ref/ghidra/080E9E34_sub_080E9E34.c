// sub_080E9E34 at 0x080E9E34 (thumb)

undefined8 sub_080E9E34(undefined4 *param_1,char param_2)

{
  char cVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = param_1[4];
  *param_1 = 1;
  *(undefined *)(param_1 + 1) = *(undefined *)(iVar4 + 0x1fc);
  *(undefined *)((int)param_1 + 5) = 0;
  sub_080EA0F8(param_1);
  sub_08002D68(0x1f,0);
  uVar2 = 0;
  puVar3 = &DAT_0835e678;
  do {
    if (((int)(uint)*(ushort *)(iVar4 + 0x200) >> (*puVar3 & 0xff) & 1U) != 0) {
      sub_080DBC4C(param_1,0,uVar2 & 0xff);
    }
    puVar3 = puVar3 + 1;
    uVar2 = uVar2 + 1;
  } while (uVar2 < 10);
  uVar2 = 0;
  puVar3 = &DAT_0835e6a0;
  do {
    if (((uint)*(ushort *)(iVar4 + 0x216) & *puVar3) != 0) {
      sub_080DBC4C(param_1,1,uVar2 & 0xff);
    }
    puVar3 = puVar3 + 1;
    uVar2 = uVar2 + 1;
  } while (uVar2 < 10);
  sub_080DBC4C(param_1,2,0);
  cVar1 = sub_080E9EE8(param_1,(int)param_2);
  return CONCAT44(in_lr,(int)cVar1);
}

