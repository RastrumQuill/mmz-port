// sub_0808CD20 at 0x0808CD20 (thumb)

undefined8 sub_0808CD20(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  int local_1c [3];
  undefined4 uStack_4;
  
  iVar1 = *(int *)(param_1 + 0x54) + param_2;
  *(int *)(param_1 + 0x54) = iVar1;
  uStack_4 = in_lr;
  if (param_2 < 0) {
    local_1c[0] = sub_08009F80(iVar1 + -0x1200,*(undefined4 *)(param_1 + 0x58));
    local_1c[1] = sub_08009F80(*(int *)(param_1 + 0x54) + -0x1200,*(int *)(param_1 + 0x58) + -0xf00)
    ;
    local_1c[2] = sub_08009F80(*(int *)(param_1 + 0x54) + -0x1200,*(int *)(param_1 + 0x58) + -0x1e00
                              );
    iVar1 = 0;
    do {
      iVar6 = iVar1 + 1;
      if (iVar6 < 3) {
        piVar3 = local_1c + iVar6;
        iVar5 = iVar6;
        do {
          iVar4 = local_1c[iVar1];
          if (iVar4 < *piVar3) {
            local_1c[iVar1] = *piVar3;
            *piVar3 = iVar4;
          }
          piVar3 = piVar3 + 1;
          iVar5 = iVar5 + 1;
        } while (iVar5 < 3);
      }
      iVar1 = iVar6;
    } while (iVar6 < 2);
    if (0 < local_1c[0]) {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + local_1c[0];
      uVar2 = 1;
      goto LAB_0808ce1e;
    }
  }
  else {
    local_1c[0] = sub_08009E14(iVar1 + 0x1200,*(undefined4 *)(param_1 + 0x58));
    local_1c[1] = sub_08009E14(*(int *)(param_1 + 0x54) + 0x1200,*(int *)(param_1 + 0x58) + -0xf00);
    local_1c[2] = sub_08009E14(*(int *)(param_1 + 0x54) + 0x1200,*(int *)(param_1 + 0x58) + -0x1e00)
    ;
    iVar1 = 0;
    do {
      iVar6 = iVar1 + 1;
      if (iVar6 < 3) {
        piVar3 = local_1c + iVar6;
        iVar5 = iVar6;
        do {
          iVar4 = local_1c[iVar1];
          if (*piVar3 < iVar4) {
            local_1c[iVar1] = *piVar3;
            *piVar3 = iVar4;
          }
          piVar3 = piVar3 + 1;
          iVar5 = iVar5 + 1;
        } while (iVar5 < 3);
      }
      iVar1 = iVar6;
    } while (iVar6 < 2);
    if (local_1c[0] < 0) {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + local_1c[0];
      uVar2 = 2;
      goto LAB_0808ce1e;
    }
  }
  uVar2 = 0;
LAB_0808ce1e:
  return CONCAT44(uStack_4,uVar2);
}

