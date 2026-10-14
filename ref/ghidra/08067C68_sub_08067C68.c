// sub_08067C68 at 0x08067C68 (thumb)

undefined4 sub_08067C68(int param_1)

{
  undefined uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  undefined local_2c;
  int local_28;
  int local_24;
  
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  if (*(char *)(param_1 + 0xc4) == '\0') {
    local_2c = 0xd;
    uVar1 = 0xe;
  }
  else {
    local_2c = 0xe;
    uVar1 = 0xd;
  }
  uVar2 = DAT_02022890 * 0x343fd + 0x269ec3;
  uVar3 = (uVar2 & 0x7fffffff) * 0x343fd + 0x269ec3;
  DAT_02022890 = uVar3 & 0x7fffffff;
  sub_0807E118(param_1,local_2c,uVar2 * 2 >> 0x11 & 0xff | 0x100,
               (int)(((uVar3 * 2 >> 0x11 & 7) + 7) * -0x400000) >> 0x10);
  uVar2 = DAT_02022890 * 0x343fd + 0x269ec3;
  uVar3 = (uVar2 & 0x7fffffff) * 0x343fd + 0x269ec3;
  DAT_02022890 = uVar3 & 0x7fffffff;
  sub_0807E118(param_1,uVar1,(int)((-0x100 - (uVar2 * 2 >> 0x11 & 0xff)) * 0x10000) >> 0x10,
               (int)(((uVar3 * 2 >> 0x11 & 7) + 7) * -0x400000) >> 0x10);
  uVar2 = DAT_02022890 * 0x343fd + 0x269ec3;
  local_28 = *(int *)(param_1 + 0x4c) + (uVar2 * 2 >> 0x11 & 0xf) * 0x100;
  uVar2 = (uVar2 & 0x7fffffff) * 0x343fd + 0x269ec3;
  DAT_02022890 = uVar2 & 0x7fffffff;
  local_24 = *(int *)(param_1 + 0x50) - ((uVar2 * 2 >> 0x11 & 0x1f) * 0x100 + -0x1000);
  sub_0808827C(2,&local_28);
  uVar2 = DAT_02022890 * 0x343fd + 0x269ec3;
  local_28 = *(int *)(param_1 + 0x4c) + (uVar2 * 2 >> 0x11 & 0xf) * -0x100;
  uVar2 = (uVar2 & 0x7fffffff) * 0x343fd + 0x269ec3;
  DAT_02022890 = uVar2 & 0x7fffffff;
  local_24 = *(int *)(param_1 + 0x50) - ((uVar2 * 2 >> 0x11 & 0x1f) * 0x100 + -0x1000);
  sub_0808827C(2,&local_28);
  iVar4 = param_1 + 0x4c;
  sub_0808827C(1,iVar4);
  sub_08001EAC(2);
  sub_08015698(4,iVar4);
  if (DAT_02022b2c < 9999) {
    DAT_02022b2c = DAT_02022b2c + 1;
  }
  sub_08015794(param_1,iVar4);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

