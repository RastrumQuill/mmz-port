// sub_0801F2E8 at 0x0801F2E8 (thumb)

undefined8 sub_0801F2E8(int param_1,int *param_2,int param_3,undefined4 param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  byte bVar5;
  undefined4 in_lr;
  
  piVar4 = param_2 + 0x26;
  bVar5 = *(byte *)piVar4 & 0xf3;
  *(byte *)piVar4 = bVar5;
  if (param_2[0x25] < param_2[0x23]) {
    uVar1 = 0;
  }
  else {
    if (param_3 == 0) {
      param_3 = *param_2;
    }
    iVar2 = param_2[0x23] + (uint)*(ushort *)(param_3 + 6);
    uVar3 = (param_2[0x25] - (uint)*(ushort *)(param_3 + 4)) - iVar2;
    uVar1 = *(int *)(param_1 + 4) - iVar2;
    iVar2 = *(int *)(param_1 + 4);
    if (uVar3 < uVar1) {
      if ((int)uVar3 < (int)uVar1) {
        uVar1 = uVar1 - uVar3;
        *(byte *)piVar4 = bVar5 | 4;
      }
      else {
        *(byte *)piVar4 = bVar5 | 8;
        if (param_5 != 0) {
          *(uint *)(param_1 + 4) = iVar2 - uVar1;
        }
      }
    }
    else {
      uVar1 = 0;
    }
  }
  return CONCAT44(in_lr,uVar1);
}

