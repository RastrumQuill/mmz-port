// sub_08077170 at 0x08077170 (thumb)

undefined4 sub_08077170(int param_1)

{
  byte bVar1;
  undefined uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x20);
  if (((*(uint *)(iVar3 + 0x90) & 0x10001) == 0) && ((*(byte *)(iVar3 + 0x94) & 2) == 0)) {
    *(byte *)(param_1 + 0x41) =
         *(byte *)(param_1 + 0x41) & 0xf | *(char *)(undefined4 *)(param_1 + 0xc0) << 4;
    uVar2 = (undefined)*(undefined4 *)(param_1 + 0xc0);
  }
  else {
    *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf | 0xd0;
    uVar2 = 0xd;
  }
  *(undefined *)(param_1 + 0x1e) = uVar2;
  bVar1 = *(byte *)(param_1 + 0xe);
  puVar4 = (undefined4 *)(param_1 + 0xbc);
  if (bVar1 == 1) {
LAB_08077202:
    if (**(char **)(param_1 + 0xb8) == '\x02') goto LAB_0807726a;
    *(undefined *)(param_1 + 0x12) = 1;
    sub_08089828(param_1 + 0x12,param_1 + 0x4c,*puVar4);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
LAB_08077226:
    if (**(char **)(param_1 + 0xb8) == '\x03') {
      sub_08076FF4(param_1);
      goto LAB_0807726a;
    }
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else {
    if (bVar1 < 2) {
      if ((bVar1 != 0) || (**(char **)(param_1 + 0xb8) == '\x01')) goto LAB_0807726a;
      sub_080897D4(*(undefined *)*puVar4,*(undefined4 *)(param_1 + 0x4c),
                   *(undefined4 *)(param_1 + 0x50));
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      goto LAB_08077202;
    }
    if (bVar1 == 2) goto LAB_08077226;
    if (bVar1 != 3) goto LAB_0807726a;
  }
  if (**(char **)(param_1 + 0xb8) == '\0') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 8);
  }
LAB_0807726a:
  *(int *)(param_1 + 0x4c) = *(int *)(iVar3 + 0x4c) + 0x600;
  *(int *)(param_1 + 0x50) = *(int *)(iVar3 + 0x50) + -0x5600;
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  *(undefined *)(param_1 + 0x1f) = *(undefined *)*puVar4;
  return in_lr;
}

