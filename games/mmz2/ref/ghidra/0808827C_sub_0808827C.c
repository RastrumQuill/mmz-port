// sub_0808827C at 0x0808827C (thumb)

undefined4 sub_0808827C(int param_1)

{
  char cVar1;
  uint uVar2;
  uint *puVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  undefined4 in_lr;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  uVar6 = DAT_0202ebbb & 1;
  if ((DAT_0202ebbb & 1) == 0) {
    uVar2 = DAT_0202ebbb & 0x20;
    if ((DAT_0202ebbb & 0x20) == 0) {
      if (DAT_0202ed50 + 0x77ff <= *(int *)(param_1 + 0x54) + 0x16700) {
        puVar3 = (uint *)(param_1 + 0xb4);
        if ((*puVar3 != 0) && (1 < *(byte *)(*puVar3 + 0xc))) {
          *puVar3 = uVar2;
        }
        piVar4 = (int *)(param_1 + 0xb8);
        if ((*piVar4 != 0) && (1 < *(byte *)(*piVar4 + 0xc))) {
          *piVar4 = 0;
        }
        if (*puVar3 == 0) {
          if (*(char *)(param_1 + 0x12) == '\0') {
            local_20 = *(int *)(param_1 + 0x54) + -0x5000;
            local_1c = DAT_0202ed54 + 0x8fff;
            uVar6 = sub_08082324(param_1,&local_20,2,1);
            *puVar3 = uVar6;
            cVar1 = -1;
          }
          else {
            cVar1 = *(char *)(param_1 + 0x12) + -1;
          }
          *(char *)(param_1 + 0x12) = cVar1;
        }
        if (*piVar4 != 0) {
          return in_lr;
        }
        if (*(char *)(param_1 + 0x13) == '\0') {
          local_18 = *(int *)(param_1 + 0x54) + 0x5000;
          local_14 = DAT_0202ed54 + 0x8fff;
          iVar5 = sub_08082324(param_1,&local_18,2,0);
          *piVar4 = iVar5;
          cVar1 = -1;
        }
        else {
          cVar1 = *(char *)(param_1 + 0x13) + -1;
        }
        *(char *)(param_1 + 0x13) = cVar1;
        return in_lr;
      }
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(uint *)(param_1 + 0x8c) = uVar2;
      *(uint *)(param_1 + 0x90) = uVar2;
      *(char *)(param_1 + 0x94) = (char)uVar2;
    }
    else {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(uint *)(param_1 + 0x8c) = uVar6;
      *(uint *)(param_1 + 0x90) = uVar6;
      *(char *)(param_1 + 0x94) = (char)uVar6;
    }
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  *(undefined4 *)(param_1 + 0xc) = 3;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  return in_lr;
}

