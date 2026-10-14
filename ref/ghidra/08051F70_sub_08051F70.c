// sub_08051F70 at 0x08051F70 (thumb)

undefined4 sub_08051F70(int param_1)

{
  byte bVar1;
  ushort uVar2;
  char cVar3;
  int iVar4;
  uint *puVar5;
  undefined4 in_lr;
  undefined4 local_1c;
  int local_18;
  
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return in_lr;
      }
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
    if (0 < *(int *)(param_1 + 0x54)) {
      *(undefined4 *)(param_1 + 0x54) = 0;
    }
    if (*(int *)(param_1 + 0x54) < -0x300) {
      *(undefined4 *)(param_1 + 0x54) = 0xfffffd00;
    }
    *(undefined4 *)(param_1 + 0x58) = 0;
    puVar5 = (uint *)(param_1 + 0x90);
    uVar2 = *(ushort *)puVar5;
    if ((uVar2 & 0x1000) == 0) {
      *(undefined *)(param_1 + 0x12) = 8;
      local_1c = *(undefined4 *)(param_1 + 0x4c);
      local_18 = *(undefined4 *)(param_1 + 0x50);
      sub_0808AF7C(param_1,&local_1c);
      sub_0808827C(1,&local_1c);
      sub_08001EAC(2);
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
      sub_08015698(4,param_1 + 0x4c);
      if (DAT_02022b2c < 9999) {
        DAT_02022b2c = DAT_02022b2c + 1;
      }
      sub_08015794(param_1,param_1 + 0x4c);
      *puVar5 = uVar2 & 0x1000;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined *)(param_1 + 0xd) = 2;
      return in_lr;
    }
    *(undefined *)(param_1 + 0x12) = 0x20;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_18 = *(int *)(param_1 + 0x50);
    sub_0808AF34(param_1);
    sub_080033F0(param_1 + 0x6c,2);
    *puVar5 = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  cVar3 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar3;
  iVar4 = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x4c) = iVar4;
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x20;
  if ((cVar3 == '\0') || (cVar3 = sub_080079CC(iVar4), cVar3 != '\0')) {
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_18 = *(int *)(param_1 + 0x50) + -0xc00;
    sub_0808827C(1,&local_1c);
    sub_08001EAC(2);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    sub_08015698(4,param_1 + 0x4c);
    if (DAT_02022b2c < 9999) {
      DAT_02022b2c = DAT_02022b2c + 1;
    }
    sub_08015794(param_1,param_1 + 0x4c);
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  return in_lr;
}

