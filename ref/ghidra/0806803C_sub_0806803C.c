// sub_0806803C at 0x0806803C (thumb)

undefined4 sub_0806803C(int param_1)

{
  char cVar1;
  undefined uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 in_lr;
  undefined local_20;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_080033F0(param_1 + 0x6c,7);
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0x12) = 0x10;
    if (*(char *)(param_1 + 0xc4) == '\0') {
      uVar3 = 0xffffffa0;
    }
    else {
      uVar3 = 0x60;
    }
    *(undefined4 *)(param_1 + 0x54) = uVar3;
    *(undefined4 *)(param_1 + 0x58) = 0x100;
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -0x600;
    sub_0807E180(param_1,1);
    *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf3 | 4;
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      local_20 = 0xd;
      uVar2 = 0xe;
    }
    else {
      local_20 = 0xe;
      uVar2 = 0xd;
    }
    uVar4 = DAT_02022890 * 0x343fd + 0x269ec3;
    uVar5 = (uVar4 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_02022890 = uVar5 & 0x7fffffff;
    sub_0807E118(param_1,local_20,uVar4 * 2 >> 0x11 & 0xff | 0x100,
                 (int)(((uVar5 * 2 >> 0x11 & 7) + 7) * -0x400000) >> 0x10);
    uVar4 = DAT_02022890 * 0x343fd + 0x269ec3;
    uVar5 = (uVar4 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_02022890 = uVar5 & 0x7fffffff;
    sub_0807E118(param_1,uVar2,(int)((-0x100 - (uVar4 * 2 >> 0x11 & 0xff)) * 0x10000) >> 0x10,
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

