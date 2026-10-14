// sub_0804B2F8 at 0x0804B2F8 (thumb)

undefined4 sub_0804B2F8(int param_1)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  int local_18;
  int local_14;
  
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  bVar3 = *(byte *)(param_1 + 0xd);
  if (bVar3 == 1) {
    local_18 = *(int *)(param_1 + 0x4c) +
               (int)*(short *)(&DAT_082af0a4 + (uint)*(byte *)(param_1 + 0x10) * 4);
    local_14 = *(int *)(param_1 + 0x50) +
               (int)*(short *)(&DAT_082af0a6 + (uint)*(byte *)(param_1 + 0x10) * 4) +
               (uint)*(byte *)(param_1 + 0x13) * -0x1000;
    sub_0808827C(1,&local_18);
    sub_08001EAC(2);
    *(undefined *)(param_1 + 0x45) = *(undefined *)(param_1 + 0x13);
    if (*(char *)(param_1 + 0x13) == '\0') {
      bVar3 = *(byte *)(param_1 + 10) & 0xdf;
    }
    else {
      bVar3 = *(byte *)(param_1 + 10) | 0x20;
    }
    *(byte *)(param_1 + 10) = bVar3;
    local_14 = local_14 + 0xe00;
    sub_08089334(param_1,&local_18);
    *(undefined *)(param_1 + 0x12) = 4;
    if (*(int *)(param_1 + 0xc4) != 0) {
      sub_08015698(4,param_1 + 0x4c);
      if (DAT_02022b2c < 9999) {
        DAT_02022b2c = DAT_02022b2c + 1;
      }
      sub_08015794(param_1,param_1 + 0x4c);
    }
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  else if (bVar3 < 2) {
    if (bVar3 == 0) {
      iVar4 = *(int *)(param_1 + 0x54) * 0xe6;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 0xff;
      }
      *(int *)(param_1 + 0x54) = iVar4 >> 8;
      iVar4 = *(int *)(param_1 + 0x58) + 0x40;
      *(int *)(param_1 + 0x58) = iVar4;
      if (0x6ff < iVar4) {
        *(undefined4 *)(param_1 + 0x58) = 0x700;
      }
      iVar4 = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
      *(int *)(param_1 + 0x4c) = iVar4;
      iVar5 = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
      *(int *)(param_1 + 0x50) = iVar5;
      if (*(char *)(param_1 + 0x12) == '\0') {
        local_18 = iVar4 + *(short *)(&DAT_082af0a4 + (uint)*(byte *)(param_1 + 0x10) * 4);
        local_14 = iVar5 + *(short *)(&DAT_082af0a6 + (uint)*(byte *)(param_1 + 0x10) * 4) +
                   (uint)*(byte *)(param_1 + 0x13) * -0x1000;
      }
      cVar1 = sub_0804A8B8(param_1);
      if (cVar1 == '\x02') {
        *(undefined *)(param_1 + 0x12) = 0x18;
      }
      bVar3 = *(byte *)(param_1 + 0x12);
      if ((bVar3 & 2) == 0) {
        bVar2 = *(byte *)(param_1 + 10) & 0xfe;
      }
      else {
        bVar2 = *(byte *)(param_1 + 10) | 1;
      }
      *(byte *)(param_1 + 10) = bVar2;
      *(byte *)(param_1 + 0x12) = bVar3 + 1;
      if (0x17 < bVar3) {
        *(undefined *)(param_1 + 0xd) = 1;
      }
    }
  }
  else if (bVar3 == 2) {
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    if (cVar1 == '\0') {
      *(undefined4 *)(param_1 + 0xc) = 4;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
    }
  }
  return in_lr;
}

