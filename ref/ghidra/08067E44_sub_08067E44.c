// sub_08067E44 at 0x08067E44 (thumb)

undefined4 sub_08067E44(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 in_lr;
  undefined local_20;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_080033F0(param_1 + 0x6c,7);
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0x12) = 0x20;
    *(char *)(param_1 + 0x44) = *(char *)(param_1 + 0xc4);
    if (*(char *)(param_1 + 0xc4) == '\0') {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    sub_0807E180(param_1,0);
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x50);
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if ((cVar2 == -1) || (*(char *)(*(int *)(param_1 + 0x24) + 0xf) == '\0')) {
    if (*(char *)(param_1 + 0xc4) == '\0') {
      local_20 = 0xd;
      uVar3 = 0xe;
    }
    else {
      local_20 = 0xe;
      uVar3 = 0xd;
    }
    uVar4 = DAT_02022890 * 0x343fd + 0x269ec3;
    uVar5 = (uVar4 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_02022890 = uVar5 & 0x7fffffff;
    sub_0807E118(param_1,local_20,uVar4 * 2 >> 0x11 & 0xff | 0x100,
                 (int)(((uVar5 * 2 >> 0x11 & 7) + 7) * -0x400000) >> 0x10);
    uVar4 = DAT_02022890 * 0x343fd + 0x269ec3;
    uVar5 = (uVar4 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_02022890 = uVar5 & 0x7fffffff;
    sub_0807E118(param_1,uVar3,(int)((-0x100 - (uVar4 * 2 >> 0x11 & 0xff)) * 0x10000) >> 0x10,
                 (int)(((uVar5 * 2 >> 0x11 & 7) + 7) * -0x400000) >> 0x10);
    iVar6 = param_1 + 0x4c;
    sub_0808827C(1,iVar6);
    sub_08001EAC(2);
    sub_08015698(4,iVar6);
    if (DAT_02022b2c < 9999) {
      DAT_02022b2c = DAT_02022b2c + 1;
    }
    sub_08015794(param_1,iVar6);
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  }
  return in_lr;
}

