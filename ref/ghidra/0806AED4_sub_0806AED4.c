// sub_0806AED4 at 0x0806AED4 (thumb)

undefined4 sub_0806AED4(int param_1)

{
  byte bVar1;
  undefined uVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0x12) = 0;
  }
  bVar1 = *(byte *)(param_1 + 0x10);
  if (bVar1 == 2) {
    if (*(char *)(param_1 + 0x12) == '\b') {
      sub_080033F0(param_1 + 0x6c,3);
    }
    if (*(char *)(param_1 + 0x12) != '\f') goto LAB_0806af5a;
  }
  else {
    if (2 < bVar1) {
      if (bVar1 == 3) {
        iVar3 = param_1 + 0x6c;
        if (*(char *)(param_1 + 0x12) == '\0') {
          sub_080033F0(iVar3,0);
        }
        if (*(char *)(param_1 + 0x12) == '\x10') {
          sub_080033F0(iVar3,3);
        }
        if (*(char *)(param_1 + 0x12) == '\x14') {
          sub_080033F0(iVar3,6);
        }
      }
      goto LAB_0806af5a;
    }
    if ((bVar1 != 1) || (*(char *)(param_1 + 0x12) != '\x04')) goto LAB_0806af5a;
  }
  sub_080033F0(param_1 + 0x6c,6);
LAB_0806af5a:
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
  sub_0806BA20(param_1);
  if (*(char *)(param_1 + 0x12) == '\x15') {
    if (*(char *)(param_1 + 0x11) == '\0') {
      uVar2 = (&DAT_082b0da0)
              [(uint)*(byte *)(param_1 + 0xf) + (uint)*(byte *)(param_1 + 0xc1) * 0xc];
    }
    else {
      iVar3 = sub_080C8B68(*(byte *)(param_1 + 0xf) + 8,0xc);
      uVar2 = (&DAT_082b0da0)[iVar3 + (uint)*(byte *)(param_1 + 0xc1) * 0xc];
    }
    *(undefined *)(param_1 + 0xd) = uVar2;
    *(undefined *)(param_1 + 0xe) = 1;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    *(undefined *)(param_1 + 0x12) = 4;
  }
  return in_lr;
}

