// sub_0808B510 at 0x0808B510 (thumb)

undefined4 sub_0808B510(int param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  undefined2 *puVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  int local_38 [2];
  int local_30;
  int local_2c;
  int *local_28;
  undefined *local_24;
  undefined4 uStack_4;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  uStack_4 = in_lr;
  if (bVar1 == 1) {
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
  }
  else if (bVar1 < 2) {
    if (bVar1 != 0) {
      return in_lr;
    }
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined *)(param_1 + 0x12) = 0x78;
    local_24 = (undefined *)(param_1 + 0x70);
    if (CONCAT11(*(undefined *)(param_1 + 0x1e),*local_24) - 0x6506 < 2) {
      iVar7 = 0;
      piVar5 = &DAT_0836561c;
      iVar6 = 3;
      puVar4 = &DAT_0836563c;
      local_28 = local_38;
      do {
        uVar3 = DAT_0202f608 * 0x343fd + 0x269ec3;
        DAT_0202f608 = uVar3 & 0x7fffffff;
        uVar3 = uVar3 * 2 >> 0x11 & 3;
        local_38[0] = *(int *)(param_1 + 0x54) + *piVar5;
        *(int *)((int)local_28 + 4) = *(int *)(param_1 + 0x58) + piVar5[1] + 0x4000;
        sub_080C17C0(local_38,uVar3,0,*puVar4);
        sub_080C17C0(local_38,uVar3,0,*(undefined2 *)((int)&DAT_0836563e + iVar7));
        sub_080C17C0(local_38,uVar3,0,puVar4[2]);
        puVar4 = puVar4 + 3;
        iVar7 = iVar7 + 6;
        piVar5 = piVar5 + 2;
        iVar6 = iVar6 + -1;
      } while (-1 < iVar6);
    }
    else {
      iVar7 = 0;
      piVar5 = &DAT_08365654;
      iVar6 = 3;
      puVar4 = &DAT_08365674;
      do {
        uVar3 = DAT_0202f608 * 0x343fd + 0x269ec3;
        DAT_0202f608 = uVar3 & 0x7fffffff;
        uVar3 = uVar3 * 2 >> 0x11 & 3;
        local_30 = *(int *)(param_1 + 0x54) + *piVar5;
        local_2c = *(int *)(param_1 + 0x58) + piVar5[1] + 0x4000;
        sub_080C17C0(&local_30,uVar3,1,*puVar4);
        sub_080C17C0(&local_30,uVar3,1,*(undefined2 *)((int)&DAT_08365676 + iVar7));
        sub_080C17C0(&local_30,uVar3,1,puVar4[2]);
        puVar4 = puVar4 + 3;
        iVar7 = iVar7 + 6;
        piVar5 = piVar5 + 2;
        iVar6 = iVar6 + -1;
      } while (-1 < iVar6);
    }
    if (CONCAT11(*(undefined *)(param_1 + 0x1e),*local_24) == 0x6501) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
      *(undefined *)(param_1 + 0xe) = 2;
      return uStack_4;
    }
    sub_08017700(param_1,0x6505);
    sub_080177F4(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  }
  else {
    if (bVar1 != 2) {
      if (bVar1 != 3) {
        return in_lr;
      }
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined *)(param_1 + 0xe) = 0;
      return in_lr;
    }
    if (*(char *)(param_1 + 0x12) == '\0') {
      return in_lr;
    }
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != '\0') {
      return in_lr;
    }
  }
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  return uStack_4;
}

