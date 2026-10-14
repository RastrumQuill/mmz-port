// sub_08053704 at 0x08053704 (thumb)

undefined4 sub_08053704(int param_1)

{
  byte bVar1;
  undefined uVar2;
  char cVar3;
  undefined4 in_lr;
  int local_14;
  int local_10;
  
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        sub_08015698(2,param_1 + 0x4c);
        if (DAT_02022b2c < 9999) {
          DAT_02022b2c = DAT_02022b2c + 1;
        }
        sub_08015794(param_1,param_1 + 0x4c);
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
        sub_080033F0(param_1 + 0x6c,0);
        *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      }
      else if (bVar1 != 3) {
        return in_lr;
      }
      sub_08003458(param_1 + 0x6c);
      *(undefined *)(param_1 + 0x46) =
           *(undefined *)
            (*(char *)(param_1 + 0x71) * 4 +
            *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
      if (*(char *)(param_1 + 0x73) != '\x03') {
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
    if ((*(ushort *)(undefined4 *)(param_1 + 0x90) & 0x1800) == 0x1000) {
      local_14 = *(int *)(param_1 + 0x4c) + 0x400 + (uint)(0 < *(int *)(param_1 + 0xc0)) * -0x800;
      local_10 = *(int *)(param_1 + 0x50) + -0x1000;
      sub_0808BAC0(param_1);
      sub_080033F0(param_1 + 0x6c,5);
      uVar2 = 0x18;
    }
    else {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
      uVar2 = 1;
    }
    *(undefined *)(param_1 + 0x12) = uVar2;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  cVar3 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar3;
  if (cVar3 == '\0') {
    local_14 = *(int *)(param_1 + 0x4c);
    local_10 = *(int *)(param_1 + 0x50) + -0x800;
    sub_0808827C(1,&local_14);
    sub_08001EAC(2);
    sub_0808BB08(param_1,param_1 + 0x4c);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  return in_lr;
}

