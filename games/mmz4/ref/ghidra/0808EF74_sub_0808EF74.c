// sub_0808EF74 at 0x0808EF74 (thumb)

undefined4 sub_0808EF74(int param_1)

{
  byte bVar1;
  undefined uVar2;
  int iVar3;
  int *piVar4;
  undefined4 in_lr;
  undefined auStack_18 [4];
  
  sub_08128B5C(auStack_18,&DAT_081294a4,2);
  bVar1 = *(byte *)(param_1 + 10);
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_0808FB28(param_1);
    sub_0801CF00(param_1,0x3902);
    *(undefined *)(param_1 + 0x12) = 1;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  sub_08005784(param_1 + 0x74,
               &DAT_0885c69c +
               (uint)**(byte **)(*(char *)(param_1 + 0x71) * 4 +
                                *(int *)(&DAT_0885ca70 +
                                        (CONCAT11(*(undefined *)(param_1 + 0x1e),
                                                  *(undefined *)(param_1 + 0x70)) - 0x3900) * 4)) *
               0x18);
  if (*(char *)(param_1 + 0x12) == '\0') {
    if (*(char *)(*(int *)(param_1 + 0xc0) + 0xb5) == '\0') {
      return in_lr;
    }
    uVar2 = 2;
  }
  else {
    if (*(char *)(param_1 + 0x71) != '\x02') {
      return in_lr;
    }
    iVar3 = sub_0808FCF8(param_1,param_1 + 0x54,0,0);
    piVar4 = (int *)(param_1 + 0xc0);
    *piVar4 = iVar3;
    if (iVar3 != 0) {
      *(undefined *)(iVar3 + 0xb4) = 1;
      *(undefined *)(*piVar4 + 0xb5) = 0;
      *(undefined *)(*piVar4 + 0xb7) = auStack_18[bVar1 >> 4 & 1];
      *(undefined *)(param_1 + 0x12) = 0;
      return in_lr;
    }
    uVar2 = 3;
  }
  *(undefined *)(param_1 + 0xe) = uVar2;
  *(undefined *)(param_1 + 0xf) = 0;
  return in_lr;
}

