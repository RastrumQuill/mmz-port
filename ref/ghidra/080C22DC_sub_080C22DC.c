// sub_080C22DC at 0x080C22DC (thumb)

undefined4 sub_080C22DC(int param_1)

{
  undefined uVar1;
  short *psVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_lr;
  
  iVar4 = 0;
  psVar2 = (short *)(param_1 + 0x6fe0);
  if (0 < *psVar2) {
    do {
      if (*(char *)(param_1 + 0x6fcc + iVar4) == *(char *)(param_1 + 0x6e94)) {
        if (iVar4 < *psVar2 + -1) {
          puVar3 = (undefined *)(iVar4 + 0x6fcc + param_1);
          do {
            *puVar3 = puVar3[1];
            puVar3 = puVar3 + 1;
            iVar4 = iVar4 + 1;
          } while (iVar4 < *(short *)(param_1 + 0x6fe0) + -1);
        }
        break;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *psVar2);
  }
  psVar2 = (short *)(param_1 + 0x6fe0);
  *psVar2 = *psVar2 + -1;
  iVar4 = *(int *)(param_1 + 0x6e94);
  if (iVar4 == 1) {
    *(undefined *)(param_1 + 0x6fcc + (int)*psVar2) = 3;
    *psVar2 = *psVar2 + 1;
    DAT_02022ad4 = DAT_02022ad4 | 0x40;
  }
  else if (iVar4 == 3) {
    DAT_02022ad4 = DAT_02022ad4 & 0x7f;
    DAT_02022ad5 = DAT_02022ad5 & 0xfe;
    iVar4 = param_1 + 0x6fcc;
    *(undefined *)(iVar4 + *psVar2) = 5;
    *(undefined *)(iVar4 + *psVar2 + 1) = 9;
    *(undefined *)(iVar4 + *psVar2 + 2) = 2;
    *psVar2 = *psVar2 + 3;
  }
  else {
    if (iVar4 == 5) {
      *(undefined *)(param_1 + 0x6fcc + (int)*psVar2) = 7;
      puVar3 = (undefined *)(param_1 + 0x6fcc + *psVar2 + 1);
      uVar1 = 6;
    }
    else {
      if (iVar4 != 9) {
        if (iVar4 == 7) {
          if ((*(uint *)(DAT_02022b20 + 0x14) & 0x80) == 0) goto LAB_080c2554;
          puVar3 = (undefined *)(param_1 + 0x6fcc + (int)*psVar2);
          uVar1 = 8;
        }
        else {
          if (iVar4 != 0xb) {
            if (iVar4 == 4) {
              DAT_02022ad5 = DAT_02022ad5 & 0xfb;
              if ((DAT_02022b26 & 0xf0) == 0) {
                *(undefined *)(param_1 + 0x6fcc) = 0xd;
                *psVar2 = 1;
                DAT_02022adc = DAT_02022adc | 4;
              }
            }
            else if (iVar4 == 10) {
              if ((DAT_02022b26 & 0xf0) == 0) {
                *(undefined *)(param_1 + 0x6fcc) = 0xd;
                *psVar2 = 1;
                DAT_02022adc = DAT_02022adc | 4;
              }
            }
            else if (iVar4 == 0xd) {
              *(undefined *)(param_1 + 0x6fcc) = 0xe;
              *psVar2 = 1;
              DAT_02022adc = DAT_02022adc & 0xfb | 8;
            }
            else if (iVar4 == 0xe) {
              DAT_02022adc = DAT_02022adc & 0xf7;
              *(undefined *)(param_1 + 0x6fcc) = 0xf;
              *psVar2 = 1;
            }
            else if (*(int *)(param_1 + 0x6e94) == 0xf) {
              *(undefined *)(param_1 + 0x6fcc) = 0x10;
              *(undefined2 *)(param_1 + 0x6fe0) = 1;
            }
            goto LAB_080c2554;
          }
          if ((*(uint *)(DAT_02022b20 + 0x14) & 0x800) == 0) goto LAB_080c2554;
          puVar3 = (undefined *)(param_1 + 0x6fcc + (int)*psVar2);
          uVar1 = 0xc;
        }
        *puVar3 = uVar1;
        *psVar2 = *psVar2 + 1;
        goto LAB_080c2554;
      }
      *(undefined *)(param_1 + 0x6fcc + (int)*psVar2) = 0xb;
      puVar3 = (undefined *)(param_1 + 0x6fcc + *psVar2 + 1);
      uVar1 = 10;
    }
    *puVar3 = uVar1;
    *psVar2 = *psVar2 + 2;
  }
LAB_080c2554:
  iVar4 = 0xc;
  if ((*(uint *)(DAT_02022b20 + 0x18) & 0x80) != 0) {
    iVar4 = 0xb;
  }
  if ((*(uint *)(DAT_02022b20 + 0x10) & 0x2000) == 0) {
    if ((*(byte *)(DAT_02022b20 + 0xe) < 4) &&
       ((uint)*(byte *)(DAT_02022b20 + 0xc) != iVar4 - (*(uint *)(DAT_02022b20 + 0x18) >> 0xb & 1)))
    {
      if ((*(byte *)(DAT_02022b20 + 0xc) == 6) && ((DAT_02022adc & 4) == 0)) {
        psVar2 = (short *)(param_1 + 0x6fe0);
        *(undefined *)(param_1 + 0x6fcc + (int)*psVar2) = 4;
        *psVar2 = *psVar2 + 1;
        DAT_02022ad5 = DAT_02022ad5 | 4;
      }
    }
    else {
      *(undefined *)(param_1 + 0x6fcc) = 0xd;
      *(undefined2 *)(param_1 + 0x6fe0) = 1;
      DAT_02022adc = DAT_02022adc | 4;
    }
  }
  if (*(int *)(param_1 + 0x6e94) == 8) {
    uVar5 = 0x8b;
    do {
      (&DAT_02022ad4)[(int)uVar5 >> 3] =
           (&DAT_02022ad4)[(int)uVar5 >> 3] & ~(byte)(1 << (uVar5 & 7));
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < 0xab);
  }
  return in_lr;
}

