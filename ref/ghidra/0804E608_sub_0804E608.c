// sub_0804E608 at 0x0804E608 (thumb)

undefined4 sub_0804E608(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 in_lr;
  undefined4 local_14;
  int local_10;
  
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        *(undefined *)(param_1 + 0x12) = 0x18;
        sub_08015698(3,param_1 + 0x4c);
        if (DAT_02022b2c < 9999) {
          DAT_02022b2c = DAT_02022b2c + 1;
        }
        sub_08015794(param_1,param_1 + 0x4c);
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
        *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      }
      else if (bVar1 != 3) {
        return in_lr;
      }
      cVar2 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar2;
      if (cVar2 != '\0') {
        return in_lr;
      }
      *(undefined4 *)(param_1 + 0xc) = 4;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    if (0 < *(int *)(param_1 + 0x54)) {
      *(undefined4 *)(param_1 + 0x54) = 0;
    }
    if (*(int *)(param_1 + 0x54) < -0x300) {
      *(undefined4 *)(param_1 + 0x54) = 0xfffffd00;
    }
    *(undefined4 *)(param_1 + 0x58) = 0;
    if ((*(ushort *)(undefined4 *)(param_1 + 0x90) & 0x1000) == 0) {
      *(undefined *)(param_1 + 0x12) = 8;
      local_14 = *(undefined4 *)(param_1 + 0x4c);
      local_10 = *(int *)(param_1 + 0x50);
      sub_0808A0A4(param_1,&local_14);
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    }
    else {
      *(undefined *)(param_1 + 0x12) = 0x20;
      local_14 = *(undefined4 *)(param_1 + 0x4c);
      local_10 = *(int *)(param_1 + 0x50);
      sub_0808A05C(param_1);
    }
    sub_080033F0(param_1 + 0x6c,3);
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  iVar3 = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x4c) = iVar3;
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x20;
  if ((cVar2 == '\0') || (cVar2 = sub_080079CC(iVar3), cVar2 != '\0')) {
    local_14 = *(undefined4 *)(param_1 + 0x4c);
    local_10 = *(int *)(param_1 + 0x50) + -0xc00;
    sub_0808827C(1,&local_14);
    sub_08001EAC(2);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  return in_lr;
}

