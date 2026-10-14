// sub_08068890 at 0x08068890 (thumb)

undefined4 sub_08068890(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  int local_10;
  int local_c;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0x12) = 0x20;
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  iVar3 = *(int *)(*(int *)(param_1 + 0x20) + 0x4c);
  *(int *)(param_1 + 0x4c) = iVar3 + 0x400;
  iVar2 = *(int *)(*(int *)(param_1 + 0x20) + 0x50);
  *(int *)(param_1 + 0x50) = iVar2 + -0x2e00;
  if ((*(byte *)(param_1 + 0x12) & 7) != 0) goto LAB_0806894c;
  cVar1 = *(char *)(param_1 + 0x13);
  if (cVar1 == '\0') {
    local_10 = iVar3 + -0x1100;
    local_c = -0x3700;
LAB_08068936:
    local_c = iVar2 + local_c;
  }
  else {
    if (cVar1 == -0x80) {
      local_10 = iVar3 + 0x1900;
      local_c = -0x3700;
      goto LAB_08068936;
    }
    if (cVar1 == -0x70) {
      local_10 = 0x1800;
LAB_08068930:
      local_10 = iVar3 + local_10;
      local_c = -0x3000;
      goto LAB_08068936;
    }
    if (cVar1 == -0x11) {
      local_10 = -0x1000;
      goto LAB_08068930;
    }
  }
  sub_08076710(&local_10,0x280,*(undefined *)(param_1 + 0x13));
  sub_08001EAC(0xd);
LAB_0806894c:
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    *(undefined *)(param_1 + 0xd) = 5;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

