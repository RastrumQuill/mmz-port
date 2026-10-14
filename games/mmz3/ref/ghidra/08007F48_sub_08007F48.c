// sub_08007F48 at 0x08007F48 (thumb)

undefined4 sub_08007F48(int *param_1,int *param_2)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 in_lr;
  
  if ((param_1 != (int *)0x0) && (param_2 != (int *)0x0)) {
    do {
      iVar3 = param_1[3];
      iVar4 = param_1[4];
      uVar1 = *(ushort *)(param_1 + 5);
      uVar2 = *(ushort *)((int)param_1 + 0x16);
      piVar6 = param_2;
      if (param_2 != (int *)0x0) {
        do {
          if (param_1[2] != piVar6[2]) {
            uVar5 = (uint)uVar2 + (uint)*(ushort *)((int)piVar6 + 0x16);
            if (((iVar3 - piVar6[3]) + ((uint)uVar1 + (uint)*(ushort *)(piVar6 + 5) >> 1) <
                 (uint)uVar1 + (uint)*(ushort *)(piVar6 + 5)) &&
               ((iVar4 - piVar6[4]) + (uVar5 >> 1) < uVar5)) {
              sub_08008210(param_1,piVar6);
            }
          }
          piVar6 = (int *)*piVar6;
        } while (piVar6 != (int *)0x0);
      }
      param_1 = (int *)*param_1;
    } while (param_1 != (int *)0x0);
  }
  return in_lr;
}

