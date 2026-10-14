// sub_080E5AFC at 0x080E5AFC (thumb)

undefined4 sub_080E5AFC(int param_1)

{
  char cVar1;
  byte bVar2;
  undefined uVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar6 = *(int *)(param_1 + 0x28);
  iVar4 = *(int *)(iVar6 + 0x64ac);
  if (*(char *)(iVar6 + 0xdd0) != '\0') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836e764)[*(byte *)(param_1 + 9)] + 0xc)
    ;
    return in_lr;
  }
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x68);
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    if (*(char *)(param_1 + 0x11) == '\0') {
      if (*(char *)(param_1 + 0x10) != *(char *)(iVar4 + 0xc0)) {
        *(char *)(param_1 + 0x10) = *(char *)(iVar4 + 0xc0);
        sub_08017700(param_1,*(undefined2 *)(&DAT_0836e7b0 + (uint)*(byte *)(param_1 + 0x10) * 2));
      }
      if (*(char *)(iVar6 + 3) != '\x01') goto switchD_080e5b58_caseD_6;
      cVar1 = *(char *)(param_1 + 0xd) + '\x01';
    }
    else {
      if (*(char *)(param_1 + 0x10) != *(char *)(iVar4 + 0xc1)) {
        *(char *)(param_1 + 0x10) = *(char *)(iVar4 + 0xc1);
        sub_08017700(param_1,*(undefined2 *)(&DAT_0836e7b0 + (uint)*(byte *)(param_1 + 0x10) * 2));
      }
      if (*(char *)(iVar6 + 3) != '\x02') goto switchD_080e5b58_caseD_6;
      cVar1 = *(char *)(param_1 + 0xd) + '\x01';
    }
    break;
  case 1:
    bVar2 = 2;
    if ((*(byte *)(iVar4 + 0xca) & 0xc) != 0) {
      bVar2 = 4;
    }
    bVar5 = 0;
    if (bVar2 != 0) {
      do {
        if (bVar5 != *(byte *)(param_1 + 0x10)) {
          sub_080E59EC(iVar6,bVar5,*(undefined *)(param_1 + 0x11),1);
        }
        bVar5 = bVar5 + 1;
      } while (bVar5 < bVar2);
    }
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 2:
    bVar2 = *(char *)(param_1 + 0x12) + 1;
    *(byte *)(param_1 + 0x12) = bVar2;
    *(uint *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + (uint)*(byte *)(param_1 + 0x10) * 0x200;
    if (bVar2 < 8) goto switchD_080e5b58_caseD_6;
    cVar1 = *(char *)(param_1 + 0xd) + '\x01';
    break;
  case 3:
    if (*(char *)(iVar6 + 0xdd1) == '\0') goto switchD_080e5b58_caseD_6;
    cVar1 = *(char *)(param_1 + 0xd) + '\x01';
    break;
  case 4:
    if (*(char *)(param_1 + 0x11) == '\0') {
      if (*(char *)(param_1 + 0x10) != *(char *)(iVar4 + 0xc0)) goto LAB_080e5c7c;
LAB_080e5c6c:
      *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3;
    }
    else {
      if (*(char *)(param_1 + 0x10) == *(char *)(iVar4 + 0xc1)) goto LAB_080e5c6c;
LAB_080e5c7c:
      *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 4;
    }
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 5:
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    *(uint *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + (uint)*(byte *)(param_1 + 0x10) * -0x200;
    if (cVar1 != '\0') goto switchD_080e5b58_caseD_6;
    if (*(char *)(param_1 + 0x13) != '\0') {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)((&DAT_0836e764)[*(byte *)(param_1 + 9)] + 0xc);
      goto switchD_080e5b58_caseD_6;
    }
    if (*(char *)(param_1 + 0x11) == '\0') {
      uVar3 = *(undefined *)(iVar4 + 0xc0);
    }
    else {
      uVar3 = *(undefined *)(iVar4 + 0xc1);
    }
    *(undefined *)(param_1 + 0x10) = uVar3;
    sub_08017700(param_1,*(undefined2 *)(&DAT_0836e7b0 + (uint)*(byte *)(param_1 + 0x10) * 2));
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3;
    cVar1 = '\0';
    *(undefined *)(iVar6 + 0xdd1) = 0;
    break;
  default:
    goto switchD_080e5b58_caseD_6;
  }
  *(char *)(param_1 + 0xd) = cVar1;
switchD_080e5b58_caseD_6:
  sub_080177F4(param_1);
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x58);
  if (0x100 < (ushort)DAT_020023d0) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0x20000;
  }
  return in_lr;
}

