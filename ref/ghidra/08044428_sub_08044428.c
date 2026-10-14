// sub_08044428 at 0x08044428 (thumb)

/* WARNING: Type propagation algorithm not settling */

undefined4 sub_08044428(int param_1)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  bVar3 = *(byte *)(param_1 + 0xe);
  if (bVar3 != 1) {
    if (1 < bVar3) {
      if (bVar3 == 2) {
        sub_08001EAC(0x84);
        sub_080428D0(param_1,0,6,0x90);
        sub_080428D0(param_1,1,6,0xf0);
        sub_080428D0(param_1,2,6,0x70);
        sub_080428D0(param_1,3,6,0x10);
        *(undefined *)(param_1 + 0x11) = 0;
        *(undefined *)(param_1 + 0x12) = 0;
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar3 != 3) {
        return in_lr;
      }
      bVar1 = false;
      iVar4 = *(int *)(*(int *)(param_1 + 0xc0) + 0x4c);
      iVar5 = iVar4 - *(int *)(param_1 + 0x4c);
      if (iVar5 < 0) {
        iVar5 = *(int *)(param_1 + 0x4c) - iVar4;
      }
      if (iVar5 < 0x3000) {
        sub_08042A1C(param_1,0);
        bVar3 = sub_08042CE8(param_1,0,6);
        if (bVar3 != *(byte *)(param_1 + 0xe0)) {
          if (*(byte *)(param_1 + 0xe0) < bVar3) {
            sub_0804296C(param_1,0);
          }
          else {
            sub_080429D4(param_1,0);
          }
        }
      }
      iVar4 = *(int *)(*(int *)(param_1 + 0xc4) + 0x4c);
      iVar5 = iVar4 - *(int *)(param_1 + 0x4c);
      if (iVar5 < 0) {
        iVar5 = *(int *)(param_1 + 0x4c) - iVar4;
      }
      if (iVar5 < 0x3000) {
        sub_08042A1C(param_1,1);
        bVar3 = sub_08042CE8(param_1,1,6);
        if (bVar3 != *(byte *)(param_1 + 0xe1)) {
          if (*(byte *)(param_1 + 0xe1) < bVar3) {
            sub_0804296C(param_1,1);
          }
          else {
            sub_080429D4(param_1,1);
          }
        }
      }
      iVar4 = *(int *)(*(int *)(param_1 + 200) + 0x4c);
      iVar5 = iVar4 - *(int *)(param_1 + 0x4c);
      if (iVar5 < 0) {
        iVar5 = *(int *)(param_1 + 0x4c) - iVar4;
      }
      if (iVar5 < 0x3800) {
        sub_08042A1C(param_1,2);
        bVar3 = sub_08042CE8(param_1,2,6);
        if (bVar3 != *(byte *)(param_1 + 0xe2)) {
          if (*(byte *)(param_1 + 0xe2) < bVar3) {
            sub_0804296C(param_1,2);
          }
          else {
            sub_080429D4(param_1,2);
          }
        }
      }
      else {
        bVar1 = true;
      }
      iVar4 = *(int *)(*(int *)(param_1 + 0xcc) + 0x4c);
      iVar5 = iVar4 - *(int *)(param_1 + 0x4c);
      if (iVar5 < 0) {
        iVar5 = *(int *)(param_1 + 0x4c) - iVar4;
      }
      if (iVar5 < 0x3800) {
        sub_08042A1C(param_1,3);
        bVar3 = sub_08042CE8(param_1,3,6);
        if (bVar3 != *(byte *)(param_1 + 0xe3)) {
          if (*(byte *)(param_1 + 0xe3) < bVar3) {
            sub_0804296C(param_1,3);
          }
          else {
            sub_080429D4(param_1,3);
          }
        }
      }
      else {
        bVar1 = true;
      }
      sub_08042C24(param_1,0,6);
      sub_08042C24(param_1,1,6);
      sub_08042C24(param_1,2,6);
      sub_08042C24(param_1,3,6);
      if (bVar1) {
        *(undefined *)(param_1 + 0xd) = 0x14;
        *(undefined *)(param_1 + 0xe) = 0;
      }
      sub_080297C0(param_1);
      return in_lr;
    }
    if (bVar3 != 0) {
      return in_lr;
    }
    sub_08029778(param_1,0x14);
    *(undefined *)(param_1 + 0x13) = 0x16;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  cVar2 = sub_08042DE4(param_1);
  if (cVar2 == '\0') {
    cVar2 = *(char *)(param_1 + 0x13) + -1;
    *(char *)(param_1 + 0x13) = cVar2;
    if (cVar2 == '\0') {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    sub_080297C0(param_1);
  }
  return in_lr;
}

