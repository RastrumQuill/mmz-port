// sub_0805C578 at 0x0805C578 (thumb)

undefined4 sub_0805C578(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 in_lr;
  undefined4 local_18;
  int local_14;
  
  bVar1 = *(byte *)(param_1 + 0xe);
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
    local_18 = *(undefined4 *)(param_1 + 0x4c);
    local_14 = *(int *)(param_1 + 0x50) + -0x800;
    iVar3 = *(int *)(param_1 + 0xb8);
    sub_080033F0(param_1 + 0x6c,9);
    *(uint *)(param_1 + 0x54) = (uint)(0 < iVar3) * -0x400 + 0x200;
    *(undefined *)(param_1 + 0x12) = 0x14;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    sub_0808FE8C(param_1);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  iVar3 = *(int *)(param_1 + 0x54) * 0xf0;
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  *(int *)(param_1 + 0x54) = iVar3 >> 8;
  sub_0805B7C0(param_1);
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\0') {
    local_18 = *(undefined4 *)(param_1 + 0x4c);
    local_14 = *(int *)(param_1 + 0x50) + -0x800;
    sub_0808827C(1,&local_18);
    sub_08001EAC(2);
    sub_08015698(2,param_1 + 0x4c);
    if (DAT_02022b2c < 9999) {
      DAT_02022b2c = DAT_02022b2c + 1;
    }
    sub_08015794(param_1,param_1 + 0x4c);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  return in_lr;
}

