// sub_080CFAD8 at 0x080CFAD8 (thumb)

undefined4 sub_080CFAD8(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  cVar1 = *(char *)(iVar3 + 0xbd);
  if (cVar1 == '\0') goto LAB_080cfb5c;
  if (*(char *)(param_1 + 0xd) != *(char *)(iVar3 + 0xd)) {
    if (*(char *)(iVar3 + 0xd) == '\0') {
      if (cVar1 == '\x01') {
        uVar2 = 0x8900;
        goto LAB_080cfb2a;
      }
      sub_08004230(*(undefined *)(param_1 + 0x12));
      *(undefined *)(param_1 + 0x12) = 0xbb;
      sub_080040A8(0xbb,(uint)*(byte *)(param_1 + 0xc2) << 5 | 0x200);
    }
    else if (cVar1 == '\x01') {
      uVar2 = 0x8902;
LAB_080cfb2a:
      sub_08017700(param_1,uVar2);
    }
    else {
      sub_08004230(*(undefined *)(param_1 + 0x12));
      *(undefined *)(param_1 + 0x12) = 0xbc;
      sub_080040A8(0xbc,(uint)*(byte *)(param_1 + 0xc2) << 5 | 0x200);
    }
  }
  *(undefined *)(param_1 + 0xd) = *(undefined *)(iVar3 + 0xd);
  sub_080177F4(param_1);
LAB_080cfb5c:
  sub_080041E4(*(undefined *)(param_1 + 0x12));
  uVar2 = *(undefined4 *)(iVar3 + 0x58);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar3 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  if (1 < *(byte *)(iVar3 + 0xc)) {
    if (*(char *)(param_1 + 0x12) != '\0') {
      sub_08004230();
    }
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(param_1 + 9) * 4) + 8);
  }
  return in_lr;
}

