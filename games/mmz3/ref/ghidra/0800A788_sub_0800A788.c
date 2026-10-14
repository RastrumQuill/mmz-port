// sub_0800A788 at 0x0800A788 (thumb)

undefined4 sub_0800A788(short param_1,undefined2 param_2,int *param_3,short *param_4)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  uVar2 = (uint)DAT_02002652;
  if (0x1f < uVar2 + 1) {
    return in_lr;
  }
  DAT_02002652 = (byte)(uVar2 + 1);
  (&DAT_02002654)[uVar2 * 0xc] = param_1;
  (&DAT_02002656)[uVar2 * 0xc] = param_2;
  (&DAT_0200265c)[uVar2 * 6] = *param_3 + (int)*param_4;
  (&DAT_02002660)[uVar2 * 6] = param_3[1] + (int)param_4[1];
  iVar3 = 0;
  if (DAT_02002653 != 0) {
    puVar1 = &DAT_02002480;
    do {
      if (*(short *)(puVar1 + 0x4d4) == (&DAT_02002654)[uVar2 * 0xc]) break;
      puVar1 = puVar1 + 0x18;
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)(uint)DAT_02002653);
    if (iVar3 < (int)(uint)DAT_02002653) {
      (&DAT_02002664)[uVar2 * 6] = *(undefined4 *)(iVar3 * 0x18 + 0x200295c);
      *(undefined4 *)(&DAT_02002668 + uVar2 * 0x18) = *(undefined4 *)(iVar3 * 0x18 + 0x2002960);
      goto LAB_0800a89c;
    }
  }
  (&DAT_02002664)[uVar2 * 6] = (&DAT_0200265c)[uVar2 * 6];
  *(undefined4 *)(&DAT_02002668 + uVar2 * 0x18) = (&DAT_02002660)[uVar2 * 6];
LAB_0800a89c:
  (&DAT_02002658)[uVar2 * 0xc] = (ushort)param_4[2] >> 1;
  (&DAT_0200265a)[uVar2 * 0xc] = (ushort)param_4[3] >> 1;
  return in_lr;
}

