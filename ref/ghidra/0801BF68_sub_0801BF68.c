// sub_0801BF68 at 0x0801BF68 (thumb)

undefined8 sub_0801BF68(int param_1,ushort *param_2)

{
  byte bVar1;
  char cVar2;
  ushort *puVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 in_lr;
  
  bVar1 = *(byte *)((uint)*(byte *)(param_1 + 0x12e) + param_1 + 0x130);
  if (((bVar1 & 0xc) != 0) && (uVar5 = bVar1 >> 3 & 1, uVar5 == (*(byte *)(param_1 + 10) >> 4 & 1)))
  {
    cVar2 = sub_0801A69C(param_1 + 0x4c,param_1 + 0xc4,param_2,uVar5,1,1);
    if (cVar2 != '\0') {
      puVar3 = (ushort *)sub_08018D7C(param_1,8,0);
      if (param_2 != puVar3) {
        *(uint *)(param_1 + 0x4c) =
             *(int *)(param_1 + 0x4c) + (uVar5 * 2 + -1) * ((uint)*param_2 - (uint)*puVar3);
      }
      uVar4 = 1;
      goto LAB_0801bfe0;
    }
  }
  uVar4 = 0;
LAB_0801bfe0:
  return CONCAT44(in_lr,uVar4);
}

