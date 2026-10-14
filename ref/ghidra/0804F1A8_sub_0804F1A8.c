// sub_0804F1A8 at 0x0804F1A8 (thumb)

undefined4 sub_0804F1A8(int param_1)

{
  byte bVar1;
  ushort uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  undefined4 in_lr;
  undefined4 local_1c;
  int local_18;
  
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return in_lr;
      }
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
      if (*(char *)(param_1 + 0x12) != '\0') {
        *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
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
    *(undefined4 *)(param_1 + 0x58) = 0;
    iVar4 = 1;
    if (0 < *(int *)(param_1 + 0xbc)) {
      iVar4 = -1;
    }
    *(int *)(param_1 + 0x54) = iVar4 << 7;
    puVar6 = (uint *)(param_1 + 0x90);
    uVar2 = *(ushort *)puVar6;
    if ((uVar2 & 0x1000) == 0) {
      *(undefined *)(param_1 + 0x12) = 8;
      local_1c = *(undefined4 *)(param_1 + 0x4c);
      local_18 = *(undefined4 *)(param_1 + 0x50);
      sub_0808A434(param_1,&local_1c);
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
      sub_08015698(1,param_1 + 0x4c);
      if (DAT_02022b2c < 9999) {
        DAT_02022b2c = DAT_02022b2c + 1;
      }
      sub_08015794(param_1,param_1 + 0x4c);
      local_1c = *(undefined4 *)(param_1 + 0x4c);
      local_18 = *(int *)(param_1 + 0x50) + -0xc00;
      sub_0808827C(1,&local_1c);
      *puVar6 = uVar2 & 0x1000;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined *)(param_1 + 0xd) = 2;
      return in_lr;
    }
    if ((uVar2 & 0x800) != 0) {
      *(int *)(param_1 + 0x54) = iVar4 << 9;
      *(undefined4 *)(param_1 + 0x58) = 0xfffffd00;
    }
    *(undefined *)(param_1 + 0x12) = 0x20;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_18 = *(int *)(param_1 + 0x50);
    sub_0808A3EC(param_1);
    sub_080033F0(param_1 + 0x6c,7);
    *puVar6 = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  cVar3 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar3;
  iVar5 = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  *(int *)(param_1 + 0x50) = iVar5;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x20;
  iVar4 = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x4c) = iVar4;
  if ((cVar3 == '\0') || (cVar3 = sub_080079CC(iVar4,iVar5 + 0x1000), cVar3 != '\0')) {
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_18 = *(int *)(param_1 + 0x50) + -0xc00;
    sub_0808827C(1,&local_1c);
    sub_08001EAC(2);
    sub_08015698(1,param_1 + 0x4c);
    if (DAT_02022b2c < 9999) {
      DAT_02022b2c = DAT_02022b2c + 1;
    }
    sub_08015794(param_1,param_1 + 0x4c);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  return in_lr;
}

