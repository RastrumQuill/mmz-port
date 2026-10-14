// sub_0803AE30 at 0x0803AE30 (thumb)

undefined4 sub_0803AE30(int param_1)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0x10) == '\0') &&
     ((((*(ushort *)(param_1 + 0x90) & 0x40) != 0 || (*(short *)(param_1 + 0x8c) == 0)) &&
      ((DAT_02022b64 & 0x10) == 0)))) {
    cVar1 = *(char *)(param_1 + 0xd8);
    while (cVar1 != '\0') {
      sub_0803A964(param_1);
      cVar1 = *(char *)(param_1 + 0xd8);
    }
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082acbf8 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    uVar2 = *(ushort *)(param_1 + 0x90) & 0x1000;
    if (uVar2 != 0) {
      uVar2 = 1;
    }
    *(char *)(param_1 + 0xd) = (char)uVar2;
    sub_0803AF2C(param_1);
  }
  else {
    if (((*(ushort *)(param_1 + 0x90) & 1) != 0) && (*(int *)(param_1 + 0xe4) == 0)) {
      iVar3 = sub_08015A64(0xb,param_1,&DAT_082add08);
      *(int *)(param_1 + 0xe4) = iVar3;
      if (iVar3 != 0) {
        cVar1 = *(char *)(param_1 + 0xd8);
        while (cVar1 != '\0') {
          sub_0803A964(param_1);
          cVar1 = *(char *)(param_1 + 0xd8);
        }
        *(undefined *)(param_1 + 0xd) = 0x13;
        *(undefined *)(param_1 + 0xe) = 0;
      }
    }
    sub_080C8A98(param_1,*(undefined4 *)(&DAT_082adc5c + (uint)*(byte *)(param_1 + 0xd) * 4));
    sub_080C8A98(param_1,*(undefined4 *)(&UNK_082adcac + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  return in_lr;
}

