// sub_0804A624 at 0x0804A624 (thumb)

undefined4 sub_0804A624(int param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 in_lr;
  int local_28;
  int local_24;
  int local_20;
  uint *local_1c;
  
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  if (*(char *)(param_1 + 0x73) == '\x03') {
    local_28 = *(int *)(param_1 + 0x4c);
    local_24 = *(int *)(param_1 + 0x50) + -0x1800;
    puVar2 = (undefined *)(param_1 + 0xc4);
    sub_0808887C(param_1,&local_28,*puVar2,4);
    sub_0808887C(param_1,&local_28,*puVar2,5);
    sub_0808887C(param_1,&local_28,*puVar2,6);
    local_24 = *(int *)(param_1 + 0x50) + -0x1000;
    sub_0808827C(1,&local_28);
    uVar1 = DAT_02022890 * 0x343fd + 0x269ec3;
    local_28 = *(int *)(param_1 + 0x4c) + (0x10 - (uVar1 * 2 >> 0x11 & 0x1f)) * 0x100;
    uVar1 = (uVar1 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_02022890 = uVar1 & 0x7fffffff;
    local_24 = *(int *)(param_1 + 0x50) + (uVar1 * 2 >> 0x11 & 0x1f) * -0x100;
    local_20 = 0x343fd;
    local_1c = &DAT_02022890;
    sub_0808827C(2,&local_28);
    uVar1 = local_20 * *local_1c + 0x269ec3;
    local_28 = *(int *)(param_1 + 0x4c) + (0x10 - (uVar1 * 2 >> 0x11 & 0x1f)) * 0x100;
    uVar1 = local_20 * (uVar1 & 0x7fffffff) + 0x269ec3;
    *local_1c = uVar1 & 0x7fffffff;
    local_24 = *(int *)(param_1 + 0x50) + (uVar1 * 2 >> 0x11 & 0x1f) * -0x100;
    sub_0808827C(2,&local_28);
    sub_08001EAC(2);
    sub_08015698(4,param_1 + 0x4c);
    if (DAT_02022b2c < 9999) {
      DAT_02022b2c = DAT_02022b2c + 1;
    }
    sub_08015794(param_1,param_1 + 0x4c);
    *(undefined *)(param_1 + 0xd) = 4;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  }
  return in_lr;
}

