// sub_0802DC40 at 0x0802DC40 (thumb)

undefined4 sub_0802DC40(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  undefined4 local_14;
  undefined4 local_10;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    if (((DAT_02022b64 & 1) != 0) && ((DAT_02022b6e & 1) == 0)) {
      DAT_02022b64 = DAT_02022b64 & 0xfffe | 0x20;
    }
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    *(undefined *)(param_1 + 0x12) = 0;
    DAT_02022ae0 = DAT_02022ae0 & 0xbf;
    local_14 = 0xffffe000;
    local_10 = 0xffffe800;
    uVar3 = sub_08099F90(param_1,&local_14);
    *(undefined4 *)(param_1 + 0x24) = uVar3;
  }
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(undefined *)(param_1 + 0x13) = *(undefined *)(*(int *)(param_1 + 0x24) + 0x11);
    if (*(byte *)(*(int *)(param_1 + 0x24) + 0xc) < 2) goto LAB_0802dd1c;
    DAT_02022b6e = DAT_02022b6e | 2;
    *(undefined *)(param_1 + 0x12) = 0x34;
  }
  else {
    if (*(char *)(param_1 + 0xf) != '\x01') goto LAB_0802dd1c;
    bVar1 = *(byte *)(param_1 + 0x12);
    if ((bVar1 & 1) == 0) {
      *(undefined *)(param_1 + 0x13) = 0;
    }
    else {
      *(undefined *)(param_1 + 0x13) = 1;
    }
    *(byte *)(param_1 + 0x12) = bVar1 - 1;
    if (bVar1 != 0) goto LAB_0802dd1c;
    sub_08015698(0xb,param_1 + 0x4c);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  }
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
LAB_0802dd1c:
  if (*(char *)(param_1 + 0x13) == '\0') {
    cVar2 = (&DAT_083a8013)
            [(uint)*(ushort *)(param_1 + 0x1c) * 0x14 +
             (uint)*(byte *)(param_1 + 9) * 4 + (&DAT_083a8000)[*(byte *)(param_1 + 9)]];
    *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf | cVar2 << 4;
    *(char *)(param_1 + 0x1e) = cVar2;
  }
  else {
    *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf | 0xd0;
    *(undefined *)(param_1 + 0x1e) = 0xd;
  }
  return in_lr;
}

