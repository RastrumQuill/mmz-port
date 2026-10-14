// sub_080060B4 at 0x080060B4 (thumb)

undefined4 sub_080060B4(int *param_1,uint param_2)

{
  ushort uVar1;
  undefined *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 in_lr;
  
  DAT_02005200 = *param_1;
  DAT_02005204 = param_1[1];
  DAT_02005208 = param_2;
  uVar1 = sub_08006AA4(((DAT_02005200 >> 8) + -0x78) * 0x100,((DAT_02005204 >> 8) + -0x50) * 0x100);
  DAT_02004f30 = DAT_02004f30 & 0xc1ff;
  sub_08001FA8(&DAT_02004fd0,0x80070dd);
  DAT_02004fd8 = &DAT_02004fd0;
  DAT_0200520c = uVar1 & 0xff | 0x80;
  uVar3 = 0;
  puVar2 = &DAT_02005140;
  puVar4 = &DAT_08611000;
  piVar5 = &DAT_08611000;
  do {
    sub_08005288(puVar2,piVar5[1] + (int)puVar4,*piVar5 + (int)puVar4,piVar5[2] + (int)puVar4,
                 *(undefined4 *)
                  (*(int *)((DAT_02005208 >> ((uVar3 & 0x7f) << 1) & 3) * 4 + (&DAT_08293bec)[uVar3]
                           ) + 0xc));
    puVar2 = puVar2 + 0x10;
    piVar5 = piVar5 + 3;
    puVar4 = puVar4 + 3;
    uVar3 = uVar3 + 1;
  } while ((int)uVar3 < 0xc);
  DAT_02005430 = 0xffff;
  DAT_02005432 = 0xffff;
  DAT_02021650 = 0xc;
  DAT_02021654 = 0x1000;
  DAT_0200520e = 0;
  return in_lr;
}

