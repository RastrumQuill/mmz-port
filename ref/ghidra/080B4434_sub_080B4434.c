// sub_080B4434 at 0x080B4434 (thumb)

undefined4 sub_080B4434(int param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  undefined4 in_lr;
  
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0xec) = 0;
    iVar3 = 3;
    puVar2 = (undefined4 *)(param_1 + 0xfc);
    do {
      puVar2 = puVar2 + -1;
      iVar3 = iVar3 + -1;
      *puVar2 = 0;
    } while (iVar3 != 0);
  }
  else {
    uVar5 = 0;
    piVar1 = (int *)(param_1 + 0xf0);
    iVar3 = *piVar1;
    piVar4 = piVar1;
    while (iVar3 != param_2) {
      piVar4 = piVar4 + 1;
      uVar5 = uVar5 + 1;
      iVar3 = *piVar4;
    }
    if (uVar5 < 3) {
      if (uVar5 < 2) {
        piVar4 = piVar1 + uVar5;
        do {
          *piVar4 = piVar4[1];
          piVar4 = piVar4 + 1;
          uVar5 = uVar5 + 1;
        } while (uVar5 < 2);
      }
      piVar1[uVar5] = 0;
    }
  }
  return in_lr;
}

