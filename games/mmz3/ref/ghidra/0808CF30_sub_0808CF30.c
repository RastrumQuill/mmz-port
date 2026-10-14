// sub_0808CF30 at 0x0808CF30 (thumb)

undefined8 sub_0808CF30(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if (((*(char *)(param_1 + 0xd) != '\x06') && (*(char *)(param_1 + 0x10) != '\t')) &&
     (*(int *)(param_1 + 0xb4) == 0)) {
    if (*(char *)(param_1 + 0xf) == '\0') {
      iVar1 = sub_08063614(param_1);
      if (iVar1 != 0) {
        sub_080FE2C0(param_1,*(undefined4 *)(&DAT_08365910 + (uint)*(byte *)(param_1 + 0xd) * 4));
        sub_080FE2C0(param_1,*(undefined4 *)(&DAT_08365930 + (uint)*(byte *)(param_1 + 0xd) * 4));
        if (*(char *)(param_1 + 0xd) == '\x03') {
          sub_08007390(param_1 + 0x74,
                       &DAT_08365960 + (uint)(byte)(&DAT_08365ad4)[*(byte *)(param_1 + 0xb9)] * 0x18
                      );
          sub_08017700(param_1,*(undefined2 *)(&DAT_08365ac8 + (uint)*(byte *)(param_1 + 0xb9) * 2))
          ;
        }
        *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
        sub_080177F4(param_1);
LAB_0808cfc6:
        uVar2 = 1;
        goto LAB_0808d058;
      }
    }
    else if (*(char *)(param_1 + 0xf) == '\x01') {
      iVar1 = sub_08063614(param_1);
      if (iVar1 != 0) {
        iVar1 = sub_0800A5A4(*(int *)(param_1 + 0x54) + -0x1200,*(int *)(param_1 + 0x58) + 0x400);
        if ((iVar1 != 0) ||
           (iVar1 = sub_0800A5A4(*(int *)(param_1 + 0x54) + 0x1200,*(int *)(param_1 + 0x58) + 0x400)
           , iVar1 != 0)) {
          sub_0808CD20(param_1);
        }
        if (*(char *)(param_1 + 0xd) == '\x03') {
          *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x54);
        }
        if (((*(char *)(param_1 + 0x10) != '\b') && (*(char *)(param_1 + 0xd) != '\x03')) &&
           ((*(uint *)(param_1 + 0x8c) & 0x20001) == 0x20001)) {
          uVar2 = 0;
          *(undefined *)(param_1 + 0xf) = 0;
          goto LAB_0808d058;
        }
        goto LAB_0808cfc6;
      }
      *(undefined *)(param_1 + 0xf) = 0;
    }
  }
  uVar2 = 0;
LAB_0808d058:
  return CONCAT44(in_lr,uVar2);
}

